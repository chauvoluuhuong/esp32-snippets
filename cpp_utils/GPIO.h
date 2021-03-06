/*
 * GPIO.h
 *
 *  Created on: Feb 28, 2017
 *      Author: kolban
 */

#ifndef COMPONENTS_CPP_UTILS_GPIO_H_
#define COMPONENTS_CPP_UTILS_GPIO_H_
#include <driver/gpio.h>
namespace ESP32CPP
{
	/**
	 * @brief Interface to %GPIO functions.
	 *
	 * The GPIO functions encapsulate the GPIO access.
	 *
	 * To toggle a pin we might code:
	 *
	 * @code{.cpp}
	 * ESP32CPP::GPIO::setOutput(pin);
	 * ESP32CPP::GPIO::high(pin);
	 * ESP32CPP::GPIO::low(pin);
	 * @endcode
	 */
	class GPIO {
	public:
		//GPIO();
		/**
		 * @brief Set the pin high.
		 *
		 * Ensure that the pin is set to be output prior to calling this method.
		 *
		 * @param [in] pin The pin to be set high.
		 * @return N/A.
		 */
		static void high(gpio_num_t pin) {
			write(pin, true);
		}

		static bool inRange(gpio_num_t pin);
		/**
		 * @brief Set the pin low.
		 *
		 * Ensure that the pin is set to be output prior to calling this method.
		 *
		 * @param [in] pin The pin to be set low.
		 * @return N/A.
		 */
		static void low(gpio_num_t pin) {
			write(pin, false);
		}
		static bool read(gpio_num_t pin);
		static void setInput(gpio_num_t pin);
		static void setOutput(gpio_num_t pin);
		static void write(gpio_num_t pin, bool value);


	}; // End GPIO
} // End ESP32CPP namespace
#endif /* COMPONENTS_CPP_UTILS_GPIO_H_ */
