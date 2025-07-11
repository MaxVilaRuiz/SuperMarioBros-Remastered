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

/**
 * @enum Keys
 *
 * Enumerado con los códigos de las teclas que se pueden pasar al método `Window::is_key_down`
 * para consultar el estado de una tecla.
 */
enum Keys {
    Space = 32,
    Backspace = 8,
    Delete = 127,
    End = 5,
    Escape = 27,
    Home = 2,
    Insert = 26,
    PageDown = 4,
    PageUp = 3,
    Return = 10,
    Tab = 9,
    W = 87,
    A = 65,
    S = 83,
    D = 68,
    P = 80,
    // Arrows:
    Up = 17,
    Down = 18,
    Right = 19,
    Left = 20,
};

/**
 * @class Window
 *
 * La clase `Window` permite abrir ventanas en modo gráfico en Linux, MacOS y Windows. Tiene unos
 * pocos métodos que permiten hacer programas simples que muestran gráficos, como pequeños juegos o
 * editores.
 */
class Window {
    private:
       /**
        * @brief La estructura de datos que Fenster necesita para trabajar
        */
       int     last_keys_[256];
       int     last_mouse_;
       fenster fenster_;
   
       /**
        * @brief El buffer de pixels que se reserva como zona de pintado
        *
        * Cada pixel tiene 32bits, o 4 bytes, y los 3 bytes de menos peso son los valores (entre 0 y
        * 255) de los canales R, G y B (red, green y blue).
        */
       uint32_t *pixels_;
   
       /**
        * @brief Tamaño del buffer en bytes
        */
       size_t pixels_size_;
   
       /**
        * @brief Parámetro de `zoom` para esta ventana
        */
       int zoom_ = 1;
   
       /**
        * @brief Instance del último fotograma (epoch)
        */
       int64_t last_time_;
   
       /**
        * @brief Contador de frames (o fotogramas)
        */
       int frame_count_ = 0;
   
       /**
        * @brief Fotogramas por segundo (FPS)
        */
       uint8_t fps_ = 60;
   
       // Cámara
       // TODO
   
       /**
        * @brief Este método actualiza la cámara en función de la velocidad.
        */
       void update_camera_();
   
       /**
        * @brief Determina si la cámara está en movimiento (su posición final es distinta de la
        * actual).
        */
        // TODO
   
       /**
        * @brief Constante de la velocidad a la que la cámara se desplaza a la nueva posición.
        */
       static constexpr int camera_speed_ = 8;
};
}  // namespace pro2

#endif