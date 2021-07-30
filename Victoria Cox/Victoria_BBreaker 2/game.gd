extends Node2D

var lev
var liv
var sco

func _ready():
	liv = 3
	lev = 1
	sco = 0
	$UI/win.hide()
	$UI/die.hide()

func scoreup():
	sco += 1
	$UI/score.text = "Score = " + str(sco)

func lifelost():
	liv -= 1
	$UI/life.text = "LIVES = " + str(liv)
	if liv == 0:
		$UI/die.show()
		$UI/life.hide()
		$UI/score.hide()
		$paddle.queue_free()

func nlevel():
	get_node("Level" + str(lev)).queue_free()
	lev += 1
	var nwlev = load("res://Level" + str(lev) + ".tscn")
	if nwlev == null:
		$UI/win.show()
		$UI/life.hide()
		$UI/score.hide()
		$paddle.queue.free()
	else:
		var nxlev = nwlev.instance()
		$UI/Lev.show()
		$UI/Lev/anim.play("fadeO")
		add_child(nxlev)

func _on_anim_animation_finished(anim_name):
	$UI/Lev.hide()
