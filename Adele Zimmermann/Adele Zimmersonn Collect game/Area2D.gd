extends Area2D

func _ready():
	var newX = rand_range(0, get_viewport_rect().size.x)
	var newY = rand_range(0, get_viewport_rect().size.y)
	get_node("Timer