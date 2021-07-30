extends Node

func _ready():
	randomize()
	get_node("coinspawner").set_wait_time(rand_range(1, 5))
	get_node("coinspawner").start()

func _on_coinspawner_timeout():
	var newCoinPath = load("res://coin.tscn")
	var newCoin = newCoinPath.instance()
	get_parent().add_child(newCoin)
	get_node("coinspawner").set_wait_time(rand_range(1, 5))