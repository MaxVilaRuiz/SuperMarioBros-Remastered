#ifndef WINDOW_HH
#define WINDOW_HH

#include <cassert>
#include <string>
#include <map>
#include <vector>

#define FENSTER_HEADER
#include "fenster.h"

namespace pro2 {

/**
 * @enum ModKey
 *
 * Enumerado para las 4 teclas de control: Ctrl, Shift, Alt, y Meta.
 */
enum ModKey { Ctrl = 1, Shift = 2, Alt = 4, Meta = 8 };

/**
 * @enum Colors
 *
 * Enumerado de colores con los colores más simples (los 8 colores de la paleta EGA).
 */
typedef uint32_t Color;

const Color black = 0x00000000;
const Color red = 0x00ff0000;
const Color green = 0x06d001;
const Color dark_green = 0x347433;
const Color blue = 0x5e6ddc;
const Color mid_blue = 0x27548A;
const Color soft_blue = 0x577BC1;
const Color yellow = 0x00ffff00;
const Color magenta = 0x00ff00ff;
const Color cyan = 0x0000ffff;
const Color white = 0x00ffffff;
const Color beige = 0xecc49b;
const Color gray = 0xaaaaaa;
const Color light_gray = 0xd7dbdd;
const Color brown = 0x8d573c;
const Color orange = 0xff9f00;
const Color golden = 0xffb200;
const Color taupe = 0x7f8cAA;
const Color purple = 0xb33791;
}  // namespace pro2

#endif