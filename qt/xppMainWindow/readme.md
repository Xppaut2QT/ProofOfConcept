#xppMainWindow
This program is created to simulate how the Xpp program can be integrated within a QT version of its interface. It features buttons that have improved clarity of use and are able to be interacted with. The 3D Parameters button features a proof of concept of how it can be used to incorporate C code within the interface. When clicked, the button will open a dialogue box to input a real (double) number. When inputted, the number uses the C function RPowerI() which takes a real number and puts it to a power of an integer. The integer I selected for demonstration purposes was 10 and the real number takes a user input. The output of the function is displayed in the terminal window to show it’s use.

#How it works
The .ui file holds the objects for each of the buttons and all that needs to be coded in this example is the connections to the events. In this program, the event checked is the "released" event in which will call the function when it detects a click has been released on the button.

This same functionality can be implemented by incorporating a new QPushButton object, specifying the coordinates on the window to place it, and connecting it to a function through a signal and the connect() function.
