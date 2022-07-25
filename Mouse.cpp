#include "Mouse.h"
Mouse_ Mouse;

void Mouse_::begin()
{
    bleCombo.begin();
}

void Mouse_::end()
{
    bleCombo.end();
}

void Mouse_::click(uint16_t b)
{
    bleCombo.click(b);
}

void Mouse_::move(int x, int y, signed char wheel, signed char hwheel)
{
    bleCombo.move(x, y, wheel, hwheel);
}

void Mouse_::press(uint16_t b)
{
    bleCombo.pressMouse(b);
}

void Mouse_::release(uint16_t b)
{
    bleCombo.releaseMouse(b);
}

void Mouse_::releaseAll()
{
    bleCombo.release(MOUSE_ALL_ALL);
}

bool Mouse_::isPressed(uint16_t b)
{
    return bleCombo.isPressed(b);
}