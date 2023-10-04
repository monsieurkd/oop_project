# oop_project
compsci 1102

* install sfml in ubuntu: https://www.youtube.com/watch?v=5aWMIpRiuww&ab_channel=MikeShah
* sfml tutorial: https://www.youtube.com/playlist?list=PL6xSOsbVA1eb_QqMTTcql_3PdOiE928up

PROJECT PLAN – TIMELINE
Title
Deadline
Job Details
Expected result
In charge by
Note
Design 


Find and choose the design for the game by looking up suitable images and setting them in the correct size
12 images of pieces in both color black and white

2 black and white images for the chessboard in the right size




chessBoard


Create the starting game board. This includes  the 8x8 black-white chessboard and pieces in their original positions

A finished and complete version of the black-white chessboard and 32 pieces on the board


Working with pieces creators to agree on using the correct names for pieces
chessPieces




Create 12 pieces (6 for each color), including: Pawn, Rock, Knight, Bishop, King, Queen
12 pieces move and captured in the right logic
*Pawn promotion
*Rock and King castling




chessMain


Code the main logic of the game, including:
- White always moves first
- When win, lose and draw
- Making a “fault” move (e.g. when being checkmated but are not aware)


The game runs in the right logic and stops when :

A player is being checkmated and has no possible move

There are no attack/checkmate moves that either black or white can make 

Draw when out of moves but not being checkmated

Draw during endgame: After 75 no “attacking” moves or both players repeating the same moves 3 times




Promotion would include the help from piece creator


Collapsing with all of the previous work
specialFeature


Identify the condition for Castling and Promoting
- Castling when Rock and King not yet make any moves, there is “space” between them
- Promotion when a pawn reach to another end of the board, promoting to a queen*


*Players can also choose to promote to other pieces but this considered an optional design. Queen is automatical option



Title
Deadline
Job Details
Expected result
In charge by
Note
gameMenu 


Starting menu include
- Start game
- Resume game
- Tutorial
The menu pops up on the right decide, and the next thing appears is right to the want of the player




gameTutorial


A random gameplay that can help new players to understand the moves of each piece and possible result 
A random gameplay, giving each piece the possible moves and capture rules. Introducing each piece one by one


Working with pieces creators to agree on using the correct names for pieces
Promotion




Promote the pawn
Not only Queen, Knight, Rock and Bishop would also available for promotion




historyRecord


Recording the 3 closest moves of each player

Redo and Undo
A box holding each player's move history

Undo is turning to the previous move
Redo is moving to the next move if possible*




Identify the condition for redo. This can only happens after an undo
capturedPieces


Showing what pieces that successfully captured by each player
A box holding pieces that the player successfully captured from the component. 


Captured pieces can be held in an arranged position to make it easier for player to record
offerDraw


A player can offer draw if they want to
Only during the endgame, a player chooses to offer draw and another player has the right to accept or decline





This is the extra and optional work. It might include in the final results but not one that we claim to achieve
