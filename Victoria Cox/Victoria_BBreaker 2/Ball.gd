extends RigidBody2D

var briccount
var speedup = 5
var maxspeed = 370

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
		get_parent().lifelost()

func _on_Ball_body_entered(body):
	if body.is_in_group("brics"):
		body.queue_free()
		briccount -= 1
		get_parent().scoreup()
		if briccount == 0:
			queue_free()
			get_parent().nlevel()
			
	if body.get_name() == "paddle":
		var speed = linear_velocity.length()
		var direction = position - get_parent().get_node("paddle/an").global_position
		linear_velocity = direction.normalized() * min(speed + speedup, maxspeed)
