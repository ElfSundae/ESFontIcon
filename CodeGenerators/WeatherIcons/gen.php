<?php

chdir(dirname(__FILE__));
require "../CodeGenerator.php";

$fontIdentifier     = 'WeatherIcons';
$fontDescription    = 'WeatherIcons v2.0.10 http://erikflowers.github.io/weather-icons';
$iconTypePrefix     = 'WI';
$fontFile           = 'weathericons-regular-webfont.ttf';
$fontName           = 'weathericons';

generatorFromCSS('weather-icons.css', 'wi');