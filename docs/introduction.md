---
icon: material/book-open-page-variant
---


<div class="grid cards desc" markdown>

-    <a href="https://www.sparkfun.com/products/23386">
    **SparkFun ESP32 Qwiic Pro Mini**<br>
    **SKU:** DEV-23386

    ---

    <figure markdown>
    ![Product Thumbnail](https://cdn.sparkfun.com/r/600-600/assets/parts/2/3/7/4/4/23386-Pro-Mini-ESP32-Feature-new.jpg)
    </figure></a>
    
-    The SparkFun ESP32 Qwiic Pro Mini houses the powerful ESP32-PICO-MINI-02-N8R2 variant from Espressif on our mini footprint. With two individually controllable CPU cores, adjustable CPU clock frequency, 8MB Flash,  2MB PSRAM, a co-processor that can be used in situations that require minimal computing power, as well as a rich set of peripherals such as capabilities for SD card interface, capacitive touch sensors, ADC, DAC, Two-Wire Automotive Interface, to Ethernet, high-speed SPI, UART, I²S, and I²C. 

    <center>
    [Purchase from SparkFun :fontawesome-solid-cart-plus:{ .heart }](https://www.sparkfun.com/products/23386){ .md-button .md-button--primary }
    </center>

</div>

## Required Materials

To follow along with this tutorial, you will need the following materials. You may not need everything though depending on what you have. Add it to your cart, read through the guide, and adjust the cart as necessary.

<table style="border-style:none">
    <tr>
        <td>
            <a href="https://www.sparkfun.com/products/23386">
                <center><img src="https://cdn.sparkfun.com/assets/parts/2/3/7/4/4/23386-Pro-Mini-ESP32-Feature-new.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun ESP32 Qwiic Pro Mini"></center>
                <h3 class="title">SparkFun ESP32 Qwiic Pro Mini</h3>
            </a>
            DEV-23386
        </td>
        <td>
            <a href=" https://www.sparkfun.com/products/15096">
                <center><img src="https://cdn.sparkfun.com/assets/parts/1/3/4/5/2/15096-SparkFun_Serial_Basic_Breakout_-_CH340C_and_USB-C-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="SparkFun Serial Basic Breakout - CH340C and USB-C" height="140"></center>
                <h3 class="title">SparkFun Serial Basic Breakout - CH340C and USB-C</h3>
            </a>
            DEV-15096
        </td>
        <td>
            <a href="https://www.sparkfun.com/products/15425">
                <center><img src="https://cdn.sparkfun.com/assets/parts/1/3/9/8/4/15425-Reversible_USB_A_to_C_Cable_-_0.8m-01.jpg" style="width:140px; height:140px; object-fit:contain;" alt="Reversible USB A to C Cable - 0.8m" >
                </center>
                <h3 class="title">Reversible USB A to C Cable - 0.8m</h3>
            </a>
            CAB-15425
        </td>
    </tr>
</table>


## Suggested Reading

As a more professionally oriented product, we will skip over the more fundamental tutorials (i.e. [**Ohm's Law**](https://learn.sparkfun.com/tutorials/voltage-current-resistance-and-ohms-law) and [**What is Electricity?**](https://learn.sparkfun.com/tutorials/what-is-electricity)). However, below are a few tutorials that may help users familiarize themselves with various aspects of the board.

<div class="grid cards hide col-4" markdown align="center">

-   <a href="https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering">
    <figure markdown>
    ![How to Solder: Through-Hole Soldering](https://cdn.sparkfun.com/assets/learn_tutorials/5/Soldering_Action-01.jpg)
    </figure>
    </a>
    <a href="https://learn.sparkfun.com/tutorials/how-to-solder-through-hole-soldering">**How to Solder: Through-Hole Soldering**
    </a>

-   <a href="https://learn.sparkfun.com/tutorials/sparkfun-serial-basic-ch340c-hookup-guide">
    <figure markdown>
    ![SparkFun Serial Basic CH340C Hookup Guide](https://cdn.sparkfun.com/assets/learn_tutorials/8/3/7/USB-C_and_5V_Pro_Mini.jpg)
    </figure>
    </a>
    <a href="https://learn.sparkfun.com/tutorials/sparkfun-serial-basic-ch340c-hookup-guide">**SparkFun Serial Basic CH340C Hookup Guide**
    </a>    

-   <a href="https://learn.sparkfun.com/tutorials/82">
    <figure markdown>
    ![I2C](https://cdn.sparkfun.com/assets/learn_tutorials/8/2/I2C-Block-Diagram.jpg)
    </figure>
    </a>
    <a href="https://learn.sparkfun.com/tutorials/82">**I2C**
    </a>

-   <a href="https://learn.sparkfun.com/tutorials/analog-vs-digital">
    <figure markdown>
    ![Analog vs. Digital](https://cdn.sparkfun.com/assets/learn_tutorials/8/9/analog_vs_digital_thumb.png)
    </figure>
    </a>
    <a href="https://learn.sparkfun.com/tutorials/analog-vs-digital">**Analog vs. Digital**
    </a>

-   <a href="https://learn.sparkfun.com/tutorials/serial-peripheral-interface-spi">
    <figure markdown>
    ![SPI](https://cdn.sparkfun.com/assets/learn_tutorials/1/6/spiThumb_Updated2.png)
    </figure>
    </a>
    <a href="https://learn.sparkfun.com/tutorials/serial-peripheral-interface-spi">**SPI**
    </a>
</div>


<center>
<div align="center">
    <div style="top:5px;left:5px;background-color:Gray;position:relative">
        <div style="top:-5px;left:-5px;background-color:#ffffff;position:relative;border:1px solid black;">
            <a href="https://www.sparkfun.com/qwiic"><img src="https://cdn.sparkfun.com/assets/custom_pages/2/7/2/qwiic-logo.png" alt="Qwiic Connect System" title="Qwiic Connect System"></a>
        </div>
    </div>
</div>
</center>

The SparkFun ESP32 Qwiic Pro Mini takes advantage of the [Qwiic connect system](https://www.sparkfun.com/qwiic). We recommend familiarizing yourself with the **Logic Levels** and **I<sup>2</sup>C** tutorials.  Click on the banner above to learn more about [Qwiic products](https://www.sparkfun.com/qwiic).

<center>
    <iframe width="600" height="327" src="https://www.youtube.com/embed/x0RDEHqFIF8" title="SparkFun's Qwiic Connect System" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
</center>
