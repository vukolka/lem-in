#include <iostream>
#include "lemin_vis.h"

bool lemin_vis::LoadMedia()
{
	media.loadFont("assets/lazy.ttf", 40);
	if (!(media.circleTexture = media.loadTexture("lemin_visualization/assets/circle.png", renderer)))
		std::cout << "Couldn\'t load circle.png"<< std::endl;
	if (!(media.antTexture = media.loadTexture("lemin_visualization/assets/ant.png", renderer)))
		std::cout << "Couldn\'t load ant.png"<< std::endl;
	return (true);
}
