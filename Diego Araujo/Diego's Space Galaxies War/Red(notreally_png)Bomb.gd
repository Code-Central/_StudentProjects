extends Area2D

# Varbiables
var direction
var speed
var width
var height
var score
var RandomMessage
var loseText
var result 
var TableText = ["Eh, just a few more to go...", "LoOk wHaT yOu MaDe mE Do", "Yandere Dev: stop email", "elif result == 4:", "loseText = 'loseText'", "XD", "Let's spin the wheel", "FNF, fight me", "when you 3 errors", "lol", "Gosh, you just commited self-death...Oh god..."]

func _ready():
	position = get_viewport().size / 2
	direction = Vector2()
	speed = 200
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
	if int(score) >= 210:
		queue_free()


func _on_Bomb_input_event(_viewport, event, _shape_idx):
	if event is InputEventMouseButton and event.button_index == BUTTON_LEFT and event.pressed:
		queue_free()
		get_parent().get_node("UFO").queue_free()
		get_parent().get_node("Explode").play()
		get_parent().get_node("Lose").show()
		loseText = TableText[result]
		print(loseText)
		get_parent().get_node("Lose").text = loseText
