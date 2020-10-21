game = [[0,0,0],
	    [0,0,0],
	    [0,0,0],]

def board(game_map, player=0, row=0, column=0, just_display=False):
	print("   0, 1, 2")
	if not just_display:
		game_map[row][column]=player
	for count,row in enumerate(game_map):
		print(count,row)
	return game_map

game= board(game, just_display=True)
game= board(game, player=1,row=2,column=1)
#print(id(game))
"""print(game)s
board(player=4,row=1,column=1)
print(game)
"""
'''
game = [[0,0,0],
	    [0,0,0],
	    [0,0,0],]

def board():
	print("   0, 1, 2")
	for count,row in enumerate(game):
		print(count,row)

board()
'''

