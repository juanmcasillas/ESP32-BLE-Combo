#include "Keyboard.h"

Keyboard_ Keyboard;

void Keyboard_::begin()
{
    bleCombo.begin();
}

void Keyboard_::end()
{
    bleCombo.end();
}

size_t Keyboard_::write(uint8_t k)
{
    return bleCombo.write(k);
}

size_t Keyboard_::write(const MediaKeyReport m)
{
    return bleCombo.write(m);
}

size_t Keyboard_::write(const uint8_t *buffer, size_t size)
{
    return bleCombo.write(buffer, size);
}

size_t Keyboard_::press(uint8_t k)
{
    return bleCombo.press(k);
}

size_t Keyboard_::press(const MediaKeyReport m)
{
    return bleCombo.press(m);
}

size_t Keyboard_::release(uint8_t k)
{
    return bleCombo.release(k);
}

size_t Keyboard_::release(const MediaKeyReport m)
{
    return bleCombo.release(m);
}

void Keyboard_::releaseAll()
{
    bleCombo.releaseAll();
}