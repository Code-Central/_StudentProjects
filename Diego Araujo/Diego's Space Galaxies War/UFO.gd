extends Area2D

# Varbiables
var direction
var speed
var width
var height
var score
var NewBombPath

func _ready():
	score = 0
	position = get_viewport().size / 2
	direction = Vector2()
	speed = 100
	direction.x = rand_range(-1, 1)
	direction.y = rand_range(-1, 1)
	direction = direction.normalized()
	width = get_viewport_rect().size.x
	height = get_viewport_rect().size.y
	get_parent().get_node("Win").hide()
	get_parent().get_node("Win2").hide()
func _process(delta):
	position += direction * speed * delta
	if position.x < 0 or position.x > width:
		direction.x *= -1
	if position.y < 0 or position.y > height:
		direction.y *= -1

func _on_UFO_input_event(viewport, event, shape_idx):
	if event is InputEventMouseButton and event.button_index == BUTTON_LEFT and event.pressed:
		direction.x = rand_range(-1, 1)
		direction.y = rand_range(-1, 1)
		direction = direction.normalized()
		position.x = rand_range(0, width)
		position.y = rand_range(0, height)
		speed += 5
		if score >= 122:
			NewBombPath =  load("res://Red(notreally_png)Bomb.tscn")
		else:
			NewBombPath =  load("res://Bomb.tscn")
		var newBomb = NewBombPath.instance()
		get_parent().add_child(newBomb)
		get_node("HitSound").play()
		if score > 9 and score < 49:
			score += 2
		elif score > 49:
			score += 4
			speed += 1
		elif score > 149:
			score += 5
			speed += 2
		else:
			score += 1
		get_parent().get_node("Score").text = "Score: " + str(score)
		if score >= 210:
			get_parent().get_node("Win").show()
			get_parent().get_node("Win2").show()
