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
	briccount =  get_tree().get_nodes_in_group("brics").size()

func _process(delta):
	if position.y > get_viewport_rect().end.y:
		queue_free()

func _on_Ball_body_entered(body):
	if body.name == "bric":
		body.queue_free()
		briccount -= 1
		self.queue_free()
