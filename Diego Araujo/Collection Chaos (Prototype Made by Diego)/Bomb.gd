extends Area2D

func _ready():
	var NewX = rand_range(0, get_viewport_rect().size.x)
	var NewY = rand_range(0, get_viewport_rect().size.y)
	position = Vector2(NewX, NewY)
	get_node("Timer").set_wait_time(15)
	get_node("Timer").start()

func _on_Timer_timeout():
	queue_free()
