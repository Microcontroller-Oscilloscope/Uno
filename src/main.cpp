/*
	main.cpp - entry point for code
	Copyright (C) 2025 Camren Chraplak

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "main.h"

void setup() {

	Serial.begin(BAUD_RATE);
	delay(3000);

	nvmInit(NVM_SIZE);
}

#define I8KEY 4

void loop() {

	
	int64_t i8val = 20;
	int64_t i8valr;

	nvmWriteValue(I8KEY, i8val);
	nvmGetValue(I8KEY, &i8valr);

	delay(5000);

	i8val = 35;

	nvmWriteValue(I8KEY, i8val);
	nvmGetValue(I8KEY, &i8valr);

	delay(5000);
}