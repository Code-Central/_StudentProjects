extends Node

func _ready():
	randomize()
	get_node("CoinSpawner").set_wait_time(rand_range(1, 5))
	get_node("CoinSpawner").start()
	

func _on_CoinSpawner_timeout():
	var newCoinPath = load("res://carrot.tscn")
	var newCoin = newCoinPath.instance()
	get_parent().add_child(newCoin)
	get_node("CoinSpawner").set_wait_time(rand_range(1, 5))
	
	
func_on_BombSpawner_timeout():
	var newBombPath = load("res:\\Bomb.tscn)
	var newBomb = newBombPath.instance()
	get_parent().add_child(newBomb)
	get_node("BombSpawner").set_wait_time(rand_range(2, 6))
	
	
	