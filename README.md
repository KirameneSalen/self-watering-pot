# Self-watering plant pot
## Overview

This project demonstrates how to program a self watering plant pot using an Arduino Uno and some other components

## Schematics
![Schematics](https://cdn.discordapp.com/attachments/919881028796022815/1229452084231802990/image.png?ex=662fbb7a&is=661d467a&hm=02e285ed95d764a0a3462c62fa1eb047778615f96f6232c2cf2bf16fd23db9e6& "Schematics")


## Prerequisites

 - [Resistive soil moisture sensor](https://cleste.ro/modul-cu-senzor-umiditate-sol.html)
 - [Pump](https://cleste.ro/pompa-de-apa-3-6v.html)
 - [Tube for water circulation](https://cleste.ro/furtun-lung-de-apa-de-05m.html)
 - [Arduino Uno](https://cleste.ro/arduino-uno-r3-atmega328p.html)
 - Pot (and soil)
 - [Transistor NMOS](https://cleste.ro/transistor-irf-3205-pbf.html)
 - Jumper cables ([father-father](https://cleste.ro/65-fire-jumper.html) & [mother-father](https://cleste.ro/10-x-fire-dupont-mama-tata-10cm.html))

## Setup and Build Plan
The moisture of the soil is measured using a soil moisture module (measuring the resistance of the sensor). The module's potentiometer should be adjusted depending on the environmental factors (soil type for example). This sensor measures the soil moisture with a set delay, and if it is detected that the soil is too dry (comparing to constant set values), the pump will be activated until the sensor value decreases under the threshold for the wet soil.
For the future, I would like to add a water level sensor to be able to sense when the water tank that the pump uses is too low on water and notify the user through an app.
