extends Control

onready var healthBar : TextureProgress = get_node("HealthBar")
onready var ammoText : Label = get_node("AmmoText")
onready var scoreText: Label = get_node("ScoreText")

func update_health_bar (curHP, maxHP):
		
	healthBar.max_value = maxHP
	healthBar.value = curHP
	
func update_ammo_text (ammo):
		
	ammoText.text = "Ammo: " + str(ammo)
	
func update_score_text (score):
	
	scoreText.text = "Score: " + str(score)
	

	
	