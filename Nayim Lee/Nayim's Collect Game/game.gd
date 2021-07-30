extends Node

func _ready():
	randomize()
	get_node("coinspawner").set_wait_time(rand_range(1,5))
	get_node("coinspawner").start()

func _on_coinspawner_timeout():
	var newcoinpath = load("res://coin.tscn")
	var newcoin = newcoinpath.instance()
	get_parent().add_child(newcoin)
	get_node("coinspawner").set_wait_time(rand_range(1,5))