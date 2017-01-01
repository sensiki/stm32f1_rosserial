#ifndef _ROS_dynamixel_workbench_msgs_DynamixelMX106_h
#define _ROS_dynamixel_workbench_msgs_DynamixelMX106_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamixel_workbench_msgs
{

  class DynamixelMX106 : public ros::Msg
  {
    public:
      typedef int64_t _model_number_type;
      _model_number_type model_number;
      typedef int64_t _version_of_firmware_type;
      _version_of_firmware_type version_of_firmware;
      typedef int8_t _id_type;
      _id_type id;
      typedef int64_t _baud_rate_type;
      _baud_rate_type baud_rate;
      typedef int64_t _return_delay_time_type;
      _return_delay_time_type return_delay_time;
      typedef int64_t _cw_angle_limit_type;
      _cw_angle_limit_type cw_angle_limit;
      typedef int64_t _ccw_angle_limit_type;
      _ccw_angle_limit_type ccw_angle_limit;
      typedef int64_t _drive_mode_type;
      _drive_mode_type drive_mode;
      typedef int64_t _the_highest_limit_temperature_type;
      _the_highest_limit_temperature_type the_highest_limit_temperature;
      typedef int64_t _the_lowest_limit_voltage_type;
      _the_lowest_limit_voltage_type the_lowest_limit_voltage;
      typedef int64_t _the_highest_limit_voltage_type;
      _the_highest_limit_voltage_type the_highest_limit_voltage;
      typedef int64_t _max_torque_type;
      _max_torque_type max_torque;
      typedef int64_t _status_return_level_type;
      _status_return_level_type status_return_level;
      typedef int64_t _alarm_led_type;
      _alarm_led_type alarm_led;
      typedef int64_t _alarm_shutdown_type;
      _alarm_shutdown_type alarm_shutdown;
      typedef int64_t _multi_turn_offset_type;
      _multi_turn_offset_type multi_turn_offset;
      typedef int64_t _resolution_divider_type;
      _resolution_divider_type resolution_divider;
      typedef bool _torque_enable_type;
      _torque_enable_type torque_enable;
      typedef bool _led_type;
      _led_type led;
      typedef int64_t _d_gain_type;
      _d_gain_type d_gain;
      typedef int64_t _i_gain_type;
      _i_gain_type i_gain;
      typedef int64_t _p_gain_type;
      _p_gain_type p_gain;
      typedef int64_t _goal_position_type;
      _goal_position_type goal_position;
      typedef int64_t _moving_speed_type;
      _moving_speed_type moving_speed;
      typedef int64_t _torque_limit_type;
      _torque_limit_type torque_limit;
      typedef int64_t _present_position_type;
      _present_position_type present_position;
      typedef int64_t _present_velocity_type;
      _present_velocity_type present_velocity;
      typedef int64_t _present_load_type;
      _present_load_type present_load;
      typedef int64_t _present_voltage_type;
      _present_voltage_type present_voltage;
      typedef int64_t _present_temperature_type;
      _present_temperature_type present_temperature;
      typedef bool _registered_type;
      _registered_type registered;
      typedef bool _moving_type;
      _moving_type moving;
      typedef bool _lock_type;
      _lock_type lock;
      typedef int64_t _punch_type;
      _punch_type punch;
      typedef int64_t _current_type;
      _current_type current;
      typedef bool _torque_control_mode_enable_type;
      _torque_control_mode_enable_type torque_control_mode_enable;
      typedef int64_t _goal_torque_type;
      _goal_torque_type goal_torque;
      typedef int64_t _goal_acceleration_type;
      _goal_acceleration_type goal_acceleration;

    DynamixelMX106():
      model_number(0),
      version_of_firmware(0),
      id(0),
      baud_rate(0),
      return_delay_time(0),
      cw_angle_limit(0),
      ccw_angle_limit(0),
      drive_mode(0),
      the_highest_limit_temperature(0),
      the_lowest_limit_voltage(0),
      the_highest_limit_voltage(0),
      max_torque(0),
      status_return_level(0),
      alarm_led(0),
      alarm_shutdown(0),
      multi_turn_offset(0),
      resolution_divider(0),
      torque_enable(0),
      led(0),
      d_gain(0),
      i_gain(0),
      p_gain(0),
      goal_position(0),
      moving_speed(0),
      torque_limit(0),
      present_position(0),
      present_velocity(0),
      present_load(0),
      present_voltage(0),
      present_temperature(0),
      registered(0),
      moving(0),
      lock(0),
      punch(0),
      current(0),
      torque_control_mode_enable(0),
      goal_torque(0),
      goal_acceleration(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_model_number;
      u_model_number.real = this->model_number;
      *(outbuffer + offset + 0) = (u_model_number.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_model_number.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_model_number.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_model_number.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_model_number.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_model_number.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_model_number.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_model_number.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->model_number);
      union {
        int64_t real;
        uint64_t base;
      } u_version_of_firmware;
      u_version_of_firmware.real = this->version_of_firmware;
      *(outbuffer + offset + 0) = (u_version_of_firmware.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_version_of_firmware.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_version_of_firmware.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_version_of_firmware.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_version_of_firmware.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_version_of_firmware.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_version_of_firmware.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_version_of_firmware.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->version_of_firmware);
      union {
        int8_t real;
        uint8_t base;
      } u_id;
      u_id.real = this->id;
      *(outbuffer + offset + 0) = (u_id.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->id);
      union {
        int64_t real;
        uint64_t base;
      } u_baud_rate;
      u_baud_rate.real = this->baud_rate;
      *(outbuffer + offset + 0) = (u_baud_rate.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_baud_rate.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_baud_rate.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_baud_rate.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_baud_rate.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_baud_rate.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_baud_rate.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_baud_rate.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->baud_rate);
      union {
        int64_t real;
        uint64_t base;
      } u_return_delay_time;
      u_return_delay_time.real = this->return_delay_time;
      *(outbuffer + offset + 0) = (u_return_delay_time.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_return_delay_time.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_return_delay_time.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_return_delay_time.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_return_delay_time.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_return_delay_time.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_return_delay_time.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_return_delay_time.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->return_delay_time);
      union {
        int64_t real;
        uint64_t base;
      } u_cw_angle_limit;
      u_cw_angle_limit.real = this->cw_angle_limit;
      *(outbuffer + offset + 0) = (u_cw_angle_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_cw_angle_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_cw_angle_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_cw_angle_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_cw_angle_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_cw_angle_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_cw_angle_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_cw_angle_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->cw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_ccw_angle_limit;
      u_ccw_angle_limit.real = this->ccw_angle_limit;
      *(outbuffer + offset + 0) = (u_ccw_angle_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_ccw_angle_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_ccw_angle_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_ccw_angle_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_ccw_angle_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_ccw_angle_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_ccw_angle_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_ccw_angle_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->ccw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_drive_mode;
      u_drive_mode.real = this->drive_mode;
      *(outbuffer + offset + 0) = (u_drive_mode.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_drive_mode.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_drive_mode.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_drive_mode.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_drive_mode.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_drive_mode.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_drive_mode.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_drive_mode.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->drive_mode);
      union {
        int64_t real;
        uint64_t base;
      } u_the_highest_limit_temperature;
      u_the_highest_limit_temperature.real = this->the_highest_limit_temperature;
      *(outbuffer + offset + 0) = (u_the_highest_limit_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_the_highest_limit_temperature.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_the_highest_limit_temperature.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_the_highest_limit_temperature.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_the_highest_limit_temperature.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_the_highest_limit_temperature.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_the_highest_limit_temperature.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_the_highest_limit_temperature.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->the_highest_limit_temperature);
      union {
        int64_t real;
        uint64_t base;
      } u_the_lowest_limit_voltage;
      u_the_lowest_limit_voltage.real = this->the_lowest_limit_voltage;
      *(outbuffer + offset + 0) = (u_the_lowest_limit_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_the_lowest_limit_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_the_lowest_limit_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_the_lowest_limit_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_the_lowest_limit_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_the_lowest_limit_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_the_lowest_limit_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_the_lowest_limit_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->the_lowest_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_the_highest_limit_voltage;
      u_the_highest_limit_voltage.real = this->the_highest_limit_voltage;
      *(outbuffer + offset + 0) = (u_the_highest_limit_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_the_highest_limit_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_the_highest_limit_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_the_highest_limit_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_the_highest_limit_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_the_highest_limit_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_the_highest_limit_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_the_highest_limit_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->the_highest_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_max_torque;
      u_max_torque.real = this->max_torque;
      *(outbuffer + offset + 0) = (u_max_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_max_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_max_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_max_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_max_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_max_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_max_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_max_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->max_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_status_return_level;
      u_status_return_level.real = this->status_return_level;
      *(outbuffer + offset + 0) = (u_status_return_level.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_status_return_level.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_status_return_level.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_status_return_level.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_status_return_level.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_status_return_level.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_status_return_level.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_status_return_level.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->status_return_level);
      union {
        int64_t real;
        uint64_t base;
      } u_alarm_led;
      u_alarm_led.real = this->alarm_led;
      *(outbuffer + offset + 0) = (u_alarm_led.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_alarm_led.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_alarm_led.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_alarm_led.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_alarm_led.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_alarm_led.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_alarm_led.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_alarm_led.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->alarm_led);
      union {
        int64_t real;
        uint64_t base;
      } u_alarm_shutdown;
      u_alarm_shutdown.real = this->alarm_shutdown;
      *(outbuffer + offset + 0) = (u_alarm_shutdown.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_alarm_shutdown.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_alarm_shutdown.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_alarm_shutdown.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_alarm_shutdown.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_alarm_shutdown.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_alarm_shutdown.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_alarm_shutdown.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->alarm_shutdown);
      union {
        int64_t real;
        uint64_t base;
      } u_multi_turn_offset;
      u_multi_turn_offset.real = this->multi_turn_offset;
      *(outbuffer + offset + 0) = (u_multi_turn_offset.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_multi_turn_offset.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_multi_turn_offset.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_multi_turn_offset.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_multi_turn_offset.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_multi_turn_offset.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_multi_turn_offset.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_multi_turn_offset.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->multi_turn_offset);
      union {
        int64_t real;
        uint64_t base;
      } u_resolution_divider;
      u_resolution_divider.real = this->resolution_divider;
      *(outbuffer + offset + 0) = (u_resolution_divider.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_resolution_divider.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_resolution_divider.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_resolution_divider.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_resolution_divider.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_resolution_divider.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_resolution_divider.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_resolution_divider.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->resolution_divider);
      union {
        bool real;
        uint8_t base;
      } u_torque_enable;
      u_torque_enable.real = this->torque_enable;
      *(outbuffer + offset + 0) = (u_torque_enable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->torque_enable);
      union {
        bool real;
        uint8_t base;
      } u_led;
      u_led.real = this->led;
      *(outbuffer + offset + 0) = (u_led.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->led);
      union {
        int64_t real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.real = this->d_gain;
      *(outbuffer + offset + 0) = (u_d_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_d_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_d_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_d_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_d_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_d_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_d_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_d_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->d_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.real = this->i_gain;
      *(outbuffer + offset + 0) = (u_i_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_i_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_i_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_i_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_i_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_i_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_i_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_i_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->i_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.real = this->p_gain;
      *(outbuffer + offset + 0) = (u_p_gain.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_p_gain.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_p_gain.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_p_gain.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_p_gain.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_p_gain.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_p_gain.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_p_gain.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->p_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_position;
      u_goal_position.real = this->goal_position;
      *(outbuffer + offset + 0) = (u_goal_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_position.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_position.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_position.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_position.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_position.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_position);
      union {
        int64_t real;
        uint64_t base;
      } u_moving_speed;
      u_moving_speed.real = this->moving_speed;
      *(outbuffer + offset + 0) = (u_moving_speed.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_moving_speed.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_moving_speed.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_moving_speed.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_moving_speed.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_moving_speed.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_moving_speed.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_moving_speed.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->moving_speed);
      union {
        int64_t real;
        uint64_t base;
      } u_torque_limit;
      u_torque_limit.real = this->torque_limit;
      *(outbuffer + offset + 0) = (u_torque_limit.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_torque_limit.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_torque_limit.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_torque_limit.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_torque_limit.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_torque_limit.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_torque_limit.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_torque_limit.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->torque_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_present_position;
      u_present_position.real = this->present_position;
      *(outbuffer + offset + 0) = (u_present_position.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_position.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_position.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_position.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_position.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_position.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_position.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_position.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_position);
      union {
        int64_t real;
        uint64_t base;
      } u_present_velocity;
      u_present_velocity.real = this->present_velocity;
      *(outbuffer + offset + 0) = (u_present_velocity.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_velocity.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_velocity.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_velocity.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_velocity.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_velocity.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_velocity.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_velocity.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_velocity);
      union {
        int64_t real;
        uint64_t base;
      } u_present_load;
      u_present_load.real = this->present_load;
      *(outbuffer + offset + 0) = (u_present_load.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_load.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_load.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_load.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_load.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_load.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_load.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_load.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_load);
      union {
        int64_t real;
        uint64_t base;
      } u_present_voltage;
      u_present_voltage.real = this->present_voltage;
      *(outbuffer + offset + 0) = (u_present_voltage.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_voltage.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_voltage.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_voltage.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_voltage.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_voltage.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_voltage.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_voltage.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_present_temperature;
      u_present_temperature.real = this->present_temperature;
      *(outbuffer + offset + 0) = (u_present_temperature.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_present_temperature.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_present_temperature.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_present_temperature.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_present_temperature.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_present_temperature.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_present_temperature.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_present_temperature.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->present_temperature);
      union {
        bool real;
        uint8_t base;
      } u_registered;
      u_registered.real = this->registered;
      *(outbuffer + offset + 0) = (u_registered.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->registered);
      union {
        bool real;
        uint8_t base;
      } u_moving;
      u_moving.real = this->moving;
      *(outbuffer + offset + 0) = (u_moving.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->moving);
      union {
        bool real;
        uint8_t base;
      } u_lock;
      u_lock.real = this->lock;
      *(outbuffer + offset + 0) = (u_lock.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->lock);
      union {
        int64_t real;
        uint64_t base;
      } u_punch;
      u_punch.real = this->punch;
      *(outbuffer + offset + 0) = (u_punch.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_punch.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_punch.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_punch.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_punch.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_punch.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_punch.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_punch.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->punch);
      union {
        int64_t real;
        uint64_t base;
      } u_current;
      u_current.real = this->current;
      *(outbuffer + offset + 0) = (u_current.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_current.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_current.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_current.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_current.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_current.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_current.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_current.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->current);
      union {
        bool real;
        uint8_t base;
      } u_torque_control_mode_enable;
      u_torque_control_mode_enable.real = this->torque_control_mode_enable;
      *(outbuffer + offset + 0) = (u_torque_control_mode_enable.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->torque_control_mode_enable);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_torque;
      u_goal_torque.real = this->goal_torque;
      *(outbuffer + offset + 0) = (u_goal_torque.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_torque.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_torque.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_torque.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_torque.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_torque.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_torque.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_torque.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_acceleration;
      u_goal_acceleration.real = this->goal_acceleration;
      *(outbuffer + offset + 0) = (u_goal_acceleration.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_goal_acceleration.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_goal_acceleration.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_goal_acceleration.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_goal_acceleration.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_goal_acceleration.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_goal_acceleration.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_goal_acceleration.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->goal_acceleration);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_model_number;
      u_model_number.base = 0;
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_model_number.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->model_number = u_model_number.real;
      offset += sizeof(this->model_number);
      union {
        int64_t real;
        uint64_t base;
      } u_version_of_firmware;
      u_version_of_firmware.base = 0;
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_version_of_firmware.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->version_of_firmware = u_version_of_firmware.real;
      offset += sizeof(this->version_of_firmware);
      union {
        int8_t real;
        uint8_t base;
      } u_id;
      u_id.base = 0;
      u_id.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->id = u_id.real;
      offset += sizeof(this->id);
      union {
        int64_t real;
        uint64_t base;
      } u_baud_rate;
      u_baud_rate.base = 0;
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_baud_rate.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->baud_rate = u_baud_rate.real;
      offset += sizeof(this->baud_rate);
      union {
        int64_t real;
        uint64_t base;
      } u_return_delay_time;
      u_return_delay_time.base = 0;
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_return_delay_time.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->return_delay_time = u_return_delay_time.real;
      offset += sizeof(this->return_delay_time);
      union {
        int64_t real;
        uint64_t base;
      } u_cw_angle_limit;
      u_cw_angle_limit.base = 0;
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_cw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->cw_angle_limit = u_cw_angle_limit.real;
      offset += sizeof(this->cw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_ccw_angle_limit;
      u_ccw_angle_limit.base = 0;
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_ccw_angle_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->ccw_angle_limit = u_ccw_angle_limit.real;
      offset += sizeof(this->ccw_angle_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_drive_mode;
      u_drive_mode.base = 0;
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_drive_mode.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->drive_mode = u_drive_mode.real;
      offset += sizeof(this->drive_mode);
      union {
        int64_t real;
        uint64_t base;
      } u_the_highest_limit_temperature;
      u_the_highest_limit_temperature.base = 0;
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_the_highest_limit_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->the_highest_limit_temperature = u_the_highest_limit_temperature.real;
      offset += sizeof(this->the_highest_limit_temperature);
      union {
        int64_t real;
        uint64_t base;
      } u_the_lowest_limit_voltage;
      u_the_lowest_limit_voltage.base = 0;
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_the_lowest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->the_lowest_limit_voltage = u_the_lowest_limit_voltage.real;
      offset += sizeof(this->the_lowest_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_the_highest_limit_voltage;
      u_the_highest_limit_voltage.base = 0;
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_the_highest_limit_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->the_highest_limit_voltage = u_the_highest_limit_voltage.real;
      offset += sizeof(this->the_highest_limit_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_max_torque;
      u_max_torque.base = 0;
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_max_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->max_torque = u_max_torque.real;
      offset += sizeof(this->max_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_status_return_level;
      u_status_return_level.base = 0;
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_status_return_level.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->status_return_level = u_status_return_level.real;
      offset += sizeof(this->status_return_level);
      union {
        int64_t real;
        uint64_t base;
      } u_alarm_led;
      u_alarm_led.base = 0;
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_alarm_led.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->alarm_led = u_alarm_led.real;
      offset += sizeof(this->alarm_led);
      union {
        int64_t real;
        uint64_t base;
      } u_alarm_shutdown;
      u_alarm_shutdown.base = 0;
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_alarm_shutdown.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->alarm_shutdown = u_alarm_shutdown.real;
      offset += sizeof(this->alarm_shutdown);
      union {
        int64_t real;
        uint64_t base;
      } u_multi_turn_offset;
      u_multi_turn_offset.base = 0;
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_multi_turn_offset.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->multi_turn_offset = u_multi_turn_offset.real;
      offset += sizeof(this->multi_turn_offset);
      union {
        int64_t real;
        uint64_t base;
      } u_resolution_divider;
      u_resolution_divider.base = 0;
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_resolution_divider.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->resolution_divider = u_resolution_divider.real;
      offset += sizeof(this->resolution_divider);
      union {
        bool real;
        uint8_t base;
      } u_torque_enable;
      u_torque_enable.base = 0;
      u_torque_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->torque_enable = u_torque_enable.real;
      offset += sizeof(this->torque_enable);
      union {
        bool real;
        uint8_t base;
      } u_led;
      u_led.base = 0;
      u_led.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->led = u_led.real;
      offset += sizeof(this->led);
      union {
        int64_t real;
        uint64_t base;
      } u_d_gain;
      u_d_gain.base = 0;
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_d_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->d_gain = u_d_gain.real;
      offset += sizeof(this->d_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_i_gain;
      u_i_gain.base = 0;
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_i_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->i_gain = u_i_gain.real;
      offset += sizeof(this->i_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_p_gain;
      u_p_gain.base = 0;
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_p_gain.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->p_gain = u_p_gain.real;
      offset += sizeof(this->p_gain);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_position;
      u_goal_position.base = 0;
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_position = u_goal_position.real;
      offset += sizeof(this->goal_position);
      union {
        int64_t real;
        uint64_t base;
      } u_moving_speed;
      u_moving_speed.base = 0;
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_moving_speed.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->moving_speed = u_moving_speed.real;
      offset += sizeof(this->moving_speed);
      union {
        int64_t real;
        uint64_t base;
      } u_torque_limit;
      u_torque_limit.base = 0;
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_torque_limit.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->torque_limit = u_torque_limit.real;
      offset += sizeof(this->torque_limit);
      union {
        int64_t real;
        uint64_t base;
      } u_present_position;
      u_present_position.base = 0;
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_position.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_position = u_present_position.real;
      offset += sizeof(this->present_position);
      union {
        int64_t real;
        uint64_t base;
      } u_present_velocity;
      u_present_velocity.base = 0;
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_velocity.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_velocity = u_present_velocity.real;
      offset += sizeof(this->present_velocity);
      union {
        int64_t real;
        uint64_t base;
      } u_present_load;
      u_present_load.base = 0;
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_load.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_load = u_present_load.real;
      offset += sizeof(this->present_load);
      union {
        int64_t real;
        uint64_t base;
      } u_present_voltage;
      u_present_voltage.base = 0;
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_voltage.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_voltage = u_present_voltage.real;
      offset += sizeof(this->present_voltage);
      union {
        int64_t real;
        uint64_t base;
      } u_present_temperature;
      u_present_temperature.base = 0;
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_present_temperature.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->present_temperature = u_present_temperature.real;
      offset += sizeof(this->present_temperature);
      union {
        bool real;
        uint8_t base;
      } u_registered;
      u_registered.base = 0;
      u_registered.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->registered = u_registered.real;
      offset += sizeof(this->registered);
      union {
        bool real;
        uint8_t base;
      } u_moving;
      u_moving.base = 0;
      u_moving.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->moving = u_moving.real;
      offset += sizeof(this->moving);
      union {
        bool real;
        uint8_t base;
      } u_lock;
      u_lock.base = 0;
      u_lock.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->lock = u_lock.real;
      offset += sizeof(this->lock);
      union {
        int64_t real;
        uint64_t base;
      } u_punch;
      u_punch.base = 0;
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_punch.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->punch = u_punch.real;
      offset += sizeof(this->punch);
      union {
        int64_t real;
        uint64_t base;
      } u_current;
      u_current.base = 0;
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_current.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->current = u_current.real;
      offset += sizeof(this->current);
      union {
        bool real;
        uint8_t base;
      } u_torque_control_mode_enable;
      u_torque_control_mode_enable.base = 0;
      u_torque_control_mode_enable.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->torque_control_mode_enable = u_torque_control_mode_enable.real;
      offset += sizeof(this->torque_control_mode_enable);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_torque;
      u_goal_torque.base = 0;
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_torque.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_torque = u_goal_torque.real;
      offset += sizeof(this->goal_torque);
      union {
        int64_t real;
        uint64_t base;
      } u_goal_acceleration;
      u_goal_acceleration.base = 0;
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_goal_acceleration.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->goal_acceleration = u_goal_acceleration.real;
      offset += sizeof(this->goal_acceleration);
     return offset;
    }

    const char * getType(){ return "dynamixel_workbench_msgs/DynamixelMX106"; };
    const char * getMD5(){ return "0cafd86554f05ba61215b6149bf9e913"; };

  };

}
#endif