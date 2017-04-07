#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/** \brief Realiza la suma de dos operandos
 *
 * \param number1 valor del primer sumando
 * \param number2 valor del segundo sumando
 * \return el resultado de dicha operacion
 *
 */
float sumar(float number1,float number2)
{
    float suma;
    suma = number1 + number2;
    return suma;
}

/** \brief Realiza la resta de dos operandos
 *
 * \param number1 primer operando
 * \param number2 segundo operando
 * \return El resultado de la sustraccion
 *
 */
float restar(float number1,float number2)
{
    float resta;
    resta = number1 - number2;
    return resta;
}

/** \brief Realiza el producto entre dos operandos
 *
 * \param number1 valor del primer operando
 * \param number2 valor del segundo operando
 * \return El resultado del producto de ambos operandos
 *
 */
 float multiplicar(float number1, float number2)
 {
     float producto;
     producto = number1 * number2;
     return producto;
 }

 /** \brief Realiza la division entre dos operandos
  *
  * \param number1 valor del dividendo
  * \param number2 valor del divisor
  * \return El cociente de dicha operacion
  *
  */
  float dividir(float number1,float number2)
  {
      float cociente;
      cociente = number1 / number2;
      return cociente;
  }

  /** \brief Calcula el factorial de un numero dado
   *
   * \param number Valor del numero a ser factoreado
   * \param ----
   * \return El valor factoreado
   *
   */
   int factorial(int number)
   {
       int i,resultado=1;

       for(i=number; i > 0; i--)
       {
           resultado = resultado * i;
       }
       return resultado;
   }

