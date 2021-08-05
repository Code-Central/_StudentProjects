extends RigidBody2D

var speedup = 5
var maxspeed = 370
var briccount

func _ready():
	position = get_parent().get_node("paddle/an").global_position - Vector2(0, 20)
	friction = 0
	bounce = 1
	gravity_scale = 0
	
	mode = MODE_CHARACTER
	linear_damp = 0
	contact_monitor = true
	contacts_reported = 1
	briccount =  get_tree().get_nodes_in_group("brics").size()

func _process(delta):
	if position.y > get_viewport_rect().end.y:
		queue_free()
		get_parent().livDown()

func _on_Ball_body_entered(body):
	if body.is_in_group("brics"):
		body.queue_free()
		briccount -= 1
		get_parent().scoUp()
	
	if briccount == 0:
		get_parent().get_node("UI/Load").show()
		print("Showing Load")
		queue_free()
		get_parent().nexLev()
		print("Starting Loading Process")
		#load and nex start at the same time

	if body.get_name() == "paddle":
		$bou.play()
		var speed = linear_velocity.length()
		var dir = position - get_parent().get_node("paddle/an").global_position
		linear_velocity = dir.normalized() * min(speed + speedup, maxspeed)