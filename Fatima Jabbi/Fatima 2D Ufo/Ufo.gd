extends Area2D

#variables 
var direction
var speed
var width
var height

func _ready():
	position = get_viewport_rect().size / 2
	direction = Vector2()
	speed = 100
	direction.x = rand_range(-1,1)
	direction.y = rand_range(-1,1)
	direction = direction.normalized()
	width = get_viewport_rect().size.x
	height = get_viewport_rect().size.y
	
func _process(delta):
	position += direction * speed * delta
	if position.x < 0 or position.x > width:
		direction.x *= -1