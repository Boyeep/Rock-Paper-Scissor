import random

def playgame():
    choices = ["Batu", "Gunting", "Kertas"]
    botchoices = random.choice(choices)
    PlayerHP = 3
    BotHP = 3
    while (PlayerHP != 0 or BotHP != 0 ):
        playerchoices = input("Masukkan Pilihan Anda (Batu/Gunting/Kertas) : ")
        print ("Kamu memilih : ", playerchoices)
        print ("Bot memilih : ", botchoices)

        if botchoices == playerchoices : 
            print ("Hasilnya seri!")
            print ("Sisa HP Player = ", PlayerHP)
            print ("Sisa HP Bot = ", BotHP)

        elif (botchoices == "Batu" and playerchoices == "Gunting") or (botchoices == "Kertas" and playerchoices == "Batu") or (botchoices == "Gunting" and playerchoices == "Kertas") :
            print ("Kamu kalah dalam ronde ini!")
            PlayerHP -= 1
            print ("Sisa HP Player = ", PlayerHP)
            print ("Sisa HP Bot = ", BotHP)

        else :
            print ("Kamu menang dalam ronde ini!")
            BotHP -= 1
            print ("Sisa HP Player = ", PlayerHP)
            print ("Sisa HP Bot = ", BotHP)

        if BotHP == 0 :
            print ("Selamat kamu Memenangkan Game Ini!")
        if PlayerHP == 0 :
            print ("Anda Kalah Dalam Permainan Ini, Silahkan Mencoba Lagi!")
    
playgame()
