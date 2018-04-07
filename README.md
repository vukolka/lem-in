# lem-in

![](https://raw.githubusercontent.com/vukolka/lem-in/master/lemin_gif.gif)

## Problem overview

Goal of the project is to move ants from vertex a to vertex b in a graph. 
You can move each ant only once in every turn. Also, next rules must be obtained:
 - An ant can be moved only once every turn
 - It's not allowed to keep multiple ants in a roop accept rooms start and end

Output is printed in STOUT or visualized.
Output layout:
evety turn is a sequence of andID-toRoomName
Tyrns are separeted by \n,
for example:

1-5 2-6 3-7
1-3 2-end 3-end
1-end

