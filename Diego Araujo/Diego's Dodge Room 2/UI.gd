extends CanvasLayer

signal startGame

func _on_Start_pressed():
	get_node("Start").hide()
	emit_signal("startGame")

func _on_MessageTimer_timeout():
	get_node("Message").hide()

func showMessage(text, type):
	get_node("Message").text = text
	get_node("Message").show()
	get_node("MessageTimer").start()
	if type == "normal":
		get_node("Message").add_color_override("font_color", Color(0, 1, 0))
	elif type == "gameOver":
		get_node("Message").add_color_override("font_color", Color(1, 0, 0))
func showGameOver():
	showMessage("Welp, I guess you're done.", "gameOver")
	yield(get_node("MessageTimer"), "timeout")
	showMessage("Event: Bird Attack!", "normal")