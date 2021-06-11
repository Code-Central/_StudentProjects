extends Area2D

# Varbiables
var direction
var speed
var width
var height
var RandomMessage
var loseText
var result 
var TableText = ["Harsh...", "That bomb.... THAT BOMB!!!", "Heyo, what the-", "9+10=21", "Oh no! Anyway...", "Oh no! Anyway...", "Karma...?", "Why.", "this is result 8 lol", "Tip: Teleport to teleport to a random place.", "anulla", "My number! Come back ;("]
var score

func _ready():
	position = get_viewport().size / 2
	direction = Vector2()
	speed = 100
	direction.x = rand_range(-1, 1)
	direction.y = rand_range(-1, 1)
	direction = direction.normalized()
	width = get_viewport_rect().size.x
	height = get_viewport_rect().size.y
	get_parent().get_node("Lose").hide()
	result = randi()%11
	print(result)
func _process(delta):
	position += direction * speed * delta
	if position.x < 0 or position.x > width:
		direction.x *= -1
	if position.y < 0 or position.y > height:
		direction.y *= -1
	score = get_parent().get_node("Score").text
	if int(score) >= 122 :
		queue_free()


func _on_Bomb_input_event(viewport, event, shape_idx):
	if event is InputEventMouseButton and event.button_index == BUTTON_LEFT and event.pressed:
		queue_free()
		get_parent().get_node("UFO").queue_free()
		get_parent().get_node("Explode").play()
		get_parent().get_node("Lose").show()
		loseText = TableText[result]
		print(loseText)
		get_parent().get_node("Lose").text = loseText
