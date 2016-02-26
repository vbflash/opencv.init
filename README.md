# opencv.init
opencv Init Project


#opencv Setting
1. Download opencv library from http://opencv.org/downloads.html
  - opencv 3.1 or 3.0 or etc
  
2. Set the SDK path of opencv (customize by jppark)
 Example>
   - D:\SDK\opencv2410x86
     - D:\SDK\opencv2410x86\include
     - D:\SDK\opencv2410x86\include\opencv
     - D:\SDK\opencv2410x86\include\opencv2
     - D:\SDK\opencv2410x86\lib    ( release & debug All *.lib file integrated )
  
3. Visual Studio Setting    (Recommand English Version )
 - Menu > View > Property Manager
 
![opencv](https://dl.dropbox.com/s/xcsvhx1dciiptkx/001.png?dl=0)

- Common Properties > VC++ Directories >
![opencv_Properties](https://dl.dropbox.com/s/kmtuno2nr1omjot/002.png?dl=0)

  Setting Include Directories such as below
    - D:\SDK\opencv2410x86\include
    - D:\SDK\opencv2410x86\include\opencv
    - D:\SDK\opencv2410x86\include\opencv2
    
  Setting Library Directories
    - D:\SDK\opencv2410x86\lib    ( release & debug All *.lib file integrated )

4. Setting DLL file of openCV
 -- Method1
    Copy from D:\SDK\opencv2410x86\bin\Debug to C:\Windows\SysWOW64     // Debug dll files
    Copy from D:\SDK\opencv2410x86\bin\Release to C:\Windows\SysWOW64   // Release dll files
  - Method2
    dll path register to System environment variable
    

    
#Final 
- Run opencv.init Project on the this reppository
- Complected!
    
