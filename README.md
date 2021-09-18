# Configuring multiple DS18B20 temperature sensors using Arduino
![](Assets/DS18B20.jpg)

## DS18B20

The DS18B20 communicates over a 1-Wire bus that by definition requires only one data line (and ground) for communication with a central microprocessor. In addition, the DS18B20 can derive power directly from the data line (“parasite power”), eliminating the need for an external power supply.

## Shortcomings of other examples

There are so many examples available on the internet but none of them include more than 8 DS18B20 sensors. In one of my recent projects, I had to use 16 DS18B20 sensors for monitoring temperature and save the data in a SD card. I hope my project will come handy for people who need to use two one wire bus pins simultaneously.  

<!-- ABOUT THE PROJECT -->
## About The Project

There are many great README templates available on GitHub, however, I didn't find one that really suit my needs so I created this enhanced one. I want to create a README template so amazing that it'll be the last one you ever need -- I think this is it.

Here's why:
* Your time should be focused on creating something amazing. A project that solves a problem and helps others
* You shouldn't be doing the same tasks over and over like creating a README from scratch
* You should implement DRY principles to the rest of your life :smile:

Of course, no one template will serve all projects since your needs may be different. So I'll be adding more in the near future. You may also suggest changes by forking this repo and creating a pull request or opening an issue. Thanks to all the people have contributed to expanding this template!

### Built With

Built with

* [Arduino IDE](https://www.arduino.cc/en/software) and
* Love :heart:

<!-- GETTING STARTED -->

## Getting Started

Fork this repository or clone this to your local machine. Create a new Arduino project or import this file to existing project.  Download the below libraries from either arduino library manager or download zip from external sources.

```c+
SD.h
```

```c+
SPI.h
```

```c+
OneWire.h
```

```c+
DallasTemperature.h
```

```c+
Wire.h
```

```c+
LiquidCrystal_I2C.h
```

<!-- USAGE EXAMPLES -->

## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.



<!-- CONTACT -->

## Contact

Sabit Shahriar Haque-  [sabitshahriarh@gmail.com](mailto:sabitshahriarh@gmail.com)

