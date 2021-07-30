extends Node

var score
var playerAct

func _ready():
	playerAct = "alive"
	score = 0
	randomize()
	get_node("CoinSpawner").set_wait_time(rand_range(1, 5))
	get_node("CoinSpawner").start()
	get_node("BombSpawner").set_wait_time(rand_range(2, 6))
	get_node("BombSpawner").start()
	
	get_node("UI/GameOver").hide()
	get_node("UI/Score2").hide()
func _on_CoinSpawner_timeout():
	var NewCoinPath = load("res://Coin.tscn")
	var NewCoin = NewCoinPath.instance()
	get_parent().add_child(NewCoin)
	get_node("CoinSpawner").set_wait_time(rand_range(1, 5))
func _on_BombSpawner_timeout():
	var NewBombPath = load("res://Bomb.tscn")
	var NewBomb = NewBombPath.instance()
	get_parent().add_child(NewBomb)
	get_node("BombSpawner").set_wait_time(rand_range(2, 6))
func gameOver():
	get_node("UI/GameOver").show()
	get_node("BombHit").play()
func collectCoin():
	score += 1
	get_node("UI/Score").text = "Score: " + str(score)
	get_node("CoinGrab").play()
func playerDied():
	playerAct = "dead"
	get_node("UI/Score2").show()
	get_node("UI/Score").hide()
	if score < 10:
		get_node("UI/Score2").text = "Your Score Was: " + str(score) + "! Keep Going!"
	if score < 40 and score >= 10:
		get_node("UI/Score2").text = "Your Score Was: " + str(score) + "! You're going good!"
	if score < 70 and score >= 40:
		get_node("UI/Score2").text = "Your Score Was: " + str(score) + "! Amazing!"
	if score >= 70:
		get_node("UI/Score2").text = "Your Score Was: " + str(score) + "! Going insane from those bombs, right?"