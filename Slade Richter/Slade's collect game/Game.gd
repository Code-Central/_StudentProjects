extends Node

var score

func _ready():
	score = 0
	randomize()
	get_node("Coinspawner").set_wait_time(rand_range(1, 5))
	get_node("Coinspawner").start()
	get_node("BombSpawner").set_wait_time(rand_range(2, 6))
	get_node("BombSpawner").start()
	
	get_node("UI/GameOver").hide()

func _on_Coinspawner_timeout():
	var newCoinPath = load("res://coin.tscn")
	var newCoin = newCoinPath.instance()
	get_parent().add_child(newCoin)
	get_node("Coinspawner").set_wait_time(rand_range(1, 5))

func _on_BombSpawner_timeout():
	var newBombPath = load("res://Bomb.tscn")
	var newBomb = newBombPath.instance()
	get_parent().add_child(newBomb)
	get_node("BombSpawner").set_wait_time(rand_range(2, 6))
	
func gameOver():
	get_node("UI/GameOver").show()
	get_node("Bombhit").play()
	
func collectCoin():
	score+= 1
	get_node("UI/Score").text = "Score: " + str(score)
	get_node("Coingrab").play()
