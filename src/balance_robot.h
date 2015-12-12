/* Used for timing */
uint32_t currentTime;
static uint32_t kalmanTimer; // Timer used for the Kalman filter
static uint32_t pidTimer; // Timer used for the PID loop
static uint32_t imuTimer; // This is used to set a delay between sending IMU values
static uint32_t encoderTimer; // Timer used used to determine when to update the encoder values
static uint32_t reportTimer; // Timer used used to determine when to update the encoder values

uint16_t frameCounter=0;
/*
The output scale for any setting is [-32768, +32767] for each of the six axes. The default setting in the I2Cdevlib class is +/- 2g for the accel and +/- 250 deg/sec for the gyro.
so 
*/
#define GYRO_DEGREE

#ifdef GYRO_DEGREE
#define GYRO_SENS 131   //=1 degree/s
#endif

#ifdef GYRO_RAD
#define GYRO_SENS 7505.7471145    //  (131*57.2957795)   // =1 rad/s
#endif
//#define ACC_SENS 16384  //=1g
//#define GYRO_SENS 131   //=1 degree/s
#define ACC_SENS 1671.8367346938774   //  (16384/9.8)  // =1 m/s^2










