extends Area2D

# Create variables here
var direction
var speed
var width
var height
var score

func _ready():
	position = get_viewport_rect().size / 2
	direction = Vector2()
	speed = 100
	direction.x = rand_range(-1, 1)
	direction.y = rand_range(-1, 1)
	direction = direction.normalized()
	width = get_viewport_rect().size.x
	height = get_viewport_rect().size.y
	score = 0
	
	
func _process(delta):
	position += direction * speed * delta
	if position.x < 0 or position.x > width:
		direction.x *= -1
	if position.y < 0 or position.y > height:
		direction.y *= -1
# Declare member variables here. Examples:
# var a = 2
# var b = "text"

# Called when the node enters the scene tree for the first time.
	# Replace with function body.

# Called every frame. 'delta' is the elapsed time since the previous frame.
#func _process(delta):
#	pass


func _on_Panda_input_event(viewport, event, shape_idx):
	if event is InputEventMouseButton and event.button_index == BUTTON_LEFT and event.pressed:
		direction.x = rand_range(-1, 1)
		direction.y = rand_range(-1, 1)
		direction = direction.normalized()
		position.x = rand_range(0, width)
		position.y = rand_range(0, height)
		speed += 5
		var newDangerBubblePath = load("res://DangerBubble.tscn")
		var newDangerBubble = newDangerBubblePath.instance()
		get_parent().add_child(newDangerBubble)
		newDangerBubble.speed += 10
		get_parent().get_node("HitSound").play()
		score += 1
		get_parent().get_node("Score").text = "Score: " + str(score)