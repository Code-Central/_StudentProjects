extends KinematicBody2D

var speed = 500
var maxSpeed = 150
var gravity = 300
var friction = 0.5
var velocity = Vector2(0,0)
var xMove = 0

func _physics_process(delta):
	xMove = Input.get_action_strength("ui_right") - Input.get_action_strength("ui_left")
	if xMove != 0:
		velocity.x += xMove * speed * delta
		velocity.x = clamp(velocity.x, -maxSpeed, maxSpeed)
		
	if is_on_floor():
		if xMove == 0:
			velocity.x = lerp(velocity.x, 0, friction)
			
	velocity.y += gravity * delta
	velocity = move_and_slide(velocity)

func _on_Area2D_area_entered(area):
	if xMove == 0:
		velocity.x = lerp(velocity.x, 0, friction)
