#include <iostream>
#include "lemin_vis.h"
#include "TextImage.h"
#include "LeminMap.h"
void lemin_vis::OnLoop()
{
    if (!lemin_map.done_moving) {
        if (lemin_map.antObjs->inMidWay)
            lemin_map.antObjs->stepForward();
        else {
            if (lemin_map.makeTurn()) {
                while (lemin_map.makeMove())
                    lemin_map.antObjs->initMove(lemin_map.move);
                lemin_map.antObjs->stepForward();
            }
        }
    }
}
