def convert_word_to_pig_latin(word):
    word = word[1:] + word[0:1] + "ay"
    return word

while True:
    word_to_convert = input("What is your word(s)?\n>> ")
    new_word = convert_word_to_pig_latin(word_to_convert)
    print(new_word)