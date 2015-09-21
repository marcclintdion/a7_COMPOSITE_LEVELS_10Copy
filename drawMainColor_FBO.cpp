//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //=======================================================================================================================
    glClearColor( 0.0, 0, 0, 1.0 );
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //----------------------------------------------------------------------------------
    
    //=======================================================================================================================
    #ifdef WIN32
        //-------------------------------------------------------------------------------------------------------               
        glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
        LoadIdentity(projection);
        PerspectiveMatrix(projection, fieldOfView, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar_CAMERA[0],  adjustNearFar_CAMERA[1]);
        //-------------------------------------------------------------------------------------------------------          
    #endif
    //=======================================================================================================================
    
    //=======================================================================================================================
    #ifdef __APPLE__
                            //__THE_+14_CORRECTS_FOR_DIFFERENCE_IN_iOS_vs._WINDOWS 
        //-------------------------------------------------------------------------------------------------------               
        glViewport(0, 0, (GLsizei)viewWidth, (GLsizei)viewHeight);
        LoadIdentity(projection);
        PerspectiveMatrix(projection, fieldOfView+14, (GLfloat)viewWidth / (GLfloat)viewHeight, adjustNearFar_CAMERA[0],  adjustNearFar_CAMERA[1]);
        //-------------------------------------------------------------------------------------------------------  
        Rotate(projection, 0.0, 0.0, 1.0, -90.0);//_____FOR_iOS_LANDSCAPE_VIEW 
        //-------------------------------------------------------------------------------------------------------          
    #endif                  //__THE_+14_CORRECTS_FOR_DIFFERENCE_IN_iOS_vs._WINDOWS 
    //=======================================================================================================


    //=================================================================================
    shaderNumber = 14;
    #include "_MODEL_FOLDERS_/backGround/backGround_RENDER.cpp"

    //============================================================================================================================
    if(room_01_IS_ACTIVE == true)
    {   
        //=================================================================================    
        shaderNumber = 12;
        //----------------
        setPosition[0]  = 0.0;
        setPosition[1]  = 0.0;        
        setPosition[2]  = 0.0;        
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_A/BEAMS_01_A_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_B/BEAMS_01_B_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_C/BEAMS_01_C_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_BOTTOM/TILES_01_BOTTOM_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_TOP/TILES_01_TOP_RENDER.cpp"
    }
    //============================================================================================================================
    if(room_02_IS_ACTIVE == true)
    {   
        //=================================================================================    
        shaderNumber = 12;
        //----------------
        setPosition[0]  = 0.0;
        setPosition[1]  = 4.0;        
        setPosition[2]  = 0.0;        
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_A/BEAMS_01_A_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_B/BEAMS_01_B_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_C/BEAMS_01_C_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_BOTTOM/TILES_01_BOTTOM_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_TOP/TILES_01_TOP_RENDER.cpp"
        //=================================================================================
    }
    //============================================================================================================================
    if(room_03_IS_ACTIVE == true)
    {   
        //=================================================================================    
        shaderNumber = 12;
        //----------------
        setPosition[0]  = 0.0;
        setPosition[1]  = 8.0;        
        setPosition[2]  = 0.0;        
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_A/BEAMS_01_A_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_B/BEAMS_01_B_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/BEAMS_01_C/BEAMS_01_C_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_BOTTOM/TILES_01_BOTTOM_RENDER.cpp"
        //=================================================================================
        #include "_MODEL_FOLDERS_/ROOMS/room_01/TILES_01_TOP/TILES_01_TOP_RENDER.cpp"
        //=================================================================================
    }
    //============================================================================================================================

    shaderNumber = 13;  
    //-------------------   
    #include "_MODEL_FOLDERS_/marc/marc_RENDER.cpp"    
    //=================================================================================
