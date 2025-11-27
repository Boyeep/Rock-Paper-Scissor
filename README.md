A simple command-line Rock-Paper-Scissors game implemented in Python, where the player competes against a computer bot. Both the player and the bot start with 3 HP, and the game continues until one of them loses all their HP.

1. Features:

- Interactive command-line gameplay.
- Both player and bot start with 3 HP.
- Real-time updates on remaining HP after each round.
- Game announces the winner once HP reaches 0.

2. How to Play: 

- Run the Python script:
python game.py

- Enter your choice when prompted:
Masukkan Pilihan Anda (Batu/Gunting/Kertas) :

3. The bot will automatically choose its move.

4. The game will display:

- Your choice and the bot's choice.
- Result of the round (win, lose, or draw).
- Remaining HP for both player and bot.

5. Continue playing until either the player or bot reaches 0 HP.

6. The game will announce the final winner.

7. Rules: 

- Batu (Rock) beats Gunting (Scissors).
- Gunting (Scissors) beats Kertas (Paper).
- Kertas (Paper) beats Batu (Rock).
- Matching choices result in a draw and no HP is lost.

8. Example Gameplay:

8.1 Masukkan Pilihan Anda (Batu/Gunting/Kertas) : Batu

- Kamu memilih : Batu
- Bot memilih : Gunting

8.2 Kamu menang dalam ronde ini!

-Sisa HP Player = 3
-Sisa HP Bot = 2

9. Requirements:
Python 3.x

Notes

The game continues until either the player or the bot loses all HP.

You can restart the game by running the script again.
