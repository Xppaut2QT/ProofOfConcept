# xppOpenDialog
This program is an example of how QT can be used to improved the file selection of Xpp by using a drag and drop function. This example has a window with a widget that when a file is dropped upon the widget it will save the file path. This program will output the file path to the dropped file on terminal window.

## How it works
This functionality works by using a drag and drop event within QT, as seen in the “dragEnterEvent()” and “dropEvent” functions within widget.cpp. Here the dragEnterEvent() understands that something has been dragged onto the widget, and will check if the object has a URL. If it does, it will accept the object and put it to the dropEvent() function. If it does not, it will simply ignore the event. The dropEvent then takes the mimeData (the copy of the data dropped) and will translate it to a file path. The program will then output the file path to the terminal, but the file path can be used in any way Xpp needs. A browse button could also be added by using the getOpenFileName() function within the QFileDialog library, and can have the browser limited to .ode files by specifying in the final parameter of the afforementioned function. The function would then return the file path string. 

An example code would be:
`QString filepath = QFileDialog::getOpenFileName(this, “Open a file”, “/OdeFolder”, “Ode files (*.ode)”);`
