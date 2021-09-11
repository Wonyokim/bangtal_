#include <bangtal>
using namespace bangtal;

bool door_mouseCallback(ObjectPtr object, int x, int y, MouseAction action)
{
    endGame();
    return true;
}

int main()
{
    auto room1 = Scene::create("룸1", "images/배경-1.png");

    auto door = Object::create("Images/문-오른쪽-열림.png", room1, 800, 270);


    door->setOnMouseCallback(door_mouseCallback);

    startGame(room1);
}