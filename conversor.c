#include "conversor.h"

float converterTemperatura(float temp, char fromUnit, char toUnit){
    float result = -1;
        // Converter de Celsius para outras Unidades.
        if (fromUnit == 'C'|| fromUnit == 'c'){
            if (toUnit == 'F'|| toUnit == 'f'){
                result = (temp * 9/5) + 32; // Celsius para Fahrenheit
            } else if (toUnit == 'K'|| toUnit == 'k'){
                result = temp + 273.15; // Celsius para Kelvin
            } else if (toUnit == 'C'|| toUnit == 'c'){
                result = temp; // Sem conversão
            }
        }

        // Converter de Fahrenheit para as outras Unidades.
        if (fromUnit == 'F'|| fromUnit == 'f'){
            if (toUnit =='K'|| toUnit == 'k'){
                result = (temp - 32) * 5/9 + 273.15; // Fahrenheit para Kelvin
            } else if (toUnit == 'C'|| toUnit == 'c'){
                result = (temp - 32) * 5/9; // Fahrenheit para Celsius
            } else if (toUnit == 'F'|| toUnit == 'f'){
                result = temp; // Sem conversão
            }           
        }

        // Converter de Kelvin para as outras Unidades.
        if (fromUnit == 'K'|| fromUnit == 'k'){
            if (toUnit == 'C'|| toUnit == 'c'){
                result = (temp - 273.15); // Kelvin para Celsius
            } else if (toUnit == 'F'|| toUnit == 'f'){
                result = (temp - 273.15) * 9/5 + 32; // Kelvin para Fahrenheit
            } else if (toUnit == 'K'|| toUnit == 'k'){
                result = temp; 
            }
        }
    return result;
}