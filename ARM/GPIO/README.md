# GPIO control driver library - ARM Cortex-M4

Ports addresses, pins and direction and value macros are defined in DIO.h
### 1. Port pins initialization
Function:
````
DIO_PortInit(uint32 Port , uint32 mask, uint32 pullup_pins );
````
Example:
````
	DIO_PortInit(PortF, Pin0|Pin1|Pin2|Pin3|Pin4 , Pin0|Pin4);
````

### 2. Port pins direction setting
Function:
````
DIO_PortDirection(uint32 port, uint32 mask, uint32 value)
````
Example:
````
	DIO_PortDirection(PortF , Pin1|Pin2|Pin3, DIO_OUTPUT);
````

### 3. Port pins writing
Function:
````
DIO_PortWrite(uint32 Port, uint32 mask, uint32 value)
````
Example:
````
DIO_PortWrite(PortF,Pin0|Pin1,DIO_HIGH);
````

### 4. Port pins reading
Function:
````
void DIO_PortRead(uint32 port , uint32 mask, uint32 * buff)
````
Example:
````
DIO_PortRead(PortF,Pin41, &buff)
````


