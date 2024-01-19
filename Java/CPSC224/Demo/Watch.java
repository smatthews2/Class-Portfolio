/*
 * file: Watch.java
 * author: 
 * Date Modified:
 * Description:
 */

public class Watch {
    
    //private data members
    private int hour, minute, second;
    private String brand;

    /*
     * Default Constructor. Sets the time of the watch to 12:00:00
     */
    Watch(){
        System.out.println("default watch constructor called");
        this.hour = 12;
        this.minute = 0;
        this.second = 0;
        this.brand = "Generic Watch";
    }

    /*
     * Setter for the watch hour. Preconditions enforced.
     * Valid hour must be [0,24)
     */
    public void setHour(int hour){

        //pre condition check
        if(hour >= 24 || hour < 0){
            throw new IllegalArgumentException();
        }

        this.hour = hour;

    }

    /*
     * Setter for the watch minute. Preconditions enforced.
     * Valid minute must be [0,60)
     */
    public void setMinute(int minute){

        //pre condition check
        if(minute >= 60 || minute < 0){
            throw new IllegalArgumentException();
        }

        this.minute = minute;

    }

    /*
     * Setter for the watch second. Preconditions enforced.
     * Valid second must be [0,60)
     */
    public void setSecond(int second){

        //pre condition check
        if(second >= 60 || second < 0){
            throw new IllegalArgumentException();
        }

        this.second = second;

    }

    /*
     * getter for the hour. Returns the current hour.
     */
    public int getHour(){
        return this.hour;
    }

    /*
    * getter for the minute. Returns the current minute.
    */
    public int getMinute(){
        return this.hour;
    }

    /*
     * getter for the second. Returns the current second.
     */
    public int getSecond(){
        return this.second;
    }

    /*
     * setter for the brand of the watch
     */
    public void setBrand(String str){
        this.brand = str;
    }

    /*
     * getter for the brand of the watch
     */
    public String getBrand(){
        return this.brand;
    }

    /* 
     * Helper method to print the time of the watch.
     */
    public void printTime(){
        System.out.println(this.hour + ":" + this.minute + ":" + this.second);
    }

    /*
     * toString method converts the current time of the watch
     * into a String and returns that String. e.g. 12:00:00
     */
    @Override
    public String toString(){
        return "Time: " + this.hour + ":" + this.minute + ":" + this.second;
    }

}
