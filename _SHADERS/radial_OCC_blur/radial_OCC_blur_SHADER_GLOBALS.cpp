//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

#ifdef __APPLE__
GLfloat      adjustBlurOffset_Radial_OCC = 0.5;
#endif
#ifdef WIN32
GLfloat      adjustBlurOffset_Radial_OCC = 1.5;
#endif

GLfloat      adjustShadow_PosRadial_OCC[]  =  {-0.00109, 0.0000};//_USED TO HIDE HALO

GLuint       UNIFORM_adjustShadowPos_radial_OCC_blur;

//=====================================================================================
GLfloat      radial_OCC_blur_OFFSET_1[2];
GLfloat      radial_OCC_blur_OFFSET_2[2];
GLfloat      radial_OCC_blur_OFFSET_3[2];
GLfloat      radial_OCC_blur_OFFSET_4[2];
//----------
GLuint       UNIFORM_OFFSET_1_radial_OCC_blur;
GLuint       UNIFORM_OFFSET_2_radial_OCC_blur;
GLuint       UNIFORM_OFFSET_3_radial_OCC_blur;
GLuint       UNIFORM_OFFSET_4_radial_OCC_blur;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//=====================================================================================
GLuint      radial_OCC_blur_SHADER_VERTEX;                                                                                 
GLuint      radial_OCC_blur_SHADER_FRAGMENT;                                                                               
GLuint      radial_OCC_blur_SHADER;     

//-------------------------------------------------------------------------------------

GLuint      UNIFORM_TEXTURE_radial_OCC_blur;
