extends Node2D

var liv
var lev
var sco

func _ready():
	liv = 3
	lev = 0
	sco = 0
	
func scoUp():
	$bre.play()
	sco += 1
	$UI/Sco.text = "Score: " + str(sco)

func livDown():
	liv -= 1
	$UI/Liv.text = "Lives: " + str(liv)
	if liv == 0:
		$UI/def.show()
		$paddle.queue_free()

func nexLev():
	get_node("Level" + str(lev)).queue_free()
	lev += 1
	$UI/Lev.text = "Level: " + str(lev)
	var nlev = load("res://Level" + str(lev) + ".tscn")
	if nlev == null:
		$UI/Load.hide()
		$UI/Vic.show()
		$paddle.queue_free()
	else:
		$UI/Tim.start()
		var llev = nlev.instance()
		add_child(llev)

func _on_Tim_timeout():
	$UI/Load.hide()
