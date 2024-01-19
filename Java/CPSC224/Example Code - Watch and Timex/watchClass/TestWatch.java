import static org.junit.Assert.assertTrue;
import org.junit.Test;
//if you get errors underlined on your imports 
//make sure to enable junit tests in vscode extension


public class TestWatch {
    
    //unit test class we are not creating a constructor
    //write tests for smallest behaviors - likely methods

    @Test
    public void testWatchConstructor(){

        //first 'A' Arrange - set a state
        String defaultBrand = "Generic Watch";

        //Second 'A' Act - perform some action
        Watch testWatch = new Watch();

        //Third 'A' Assert Truth - check if behavior worked as expected
        assertTrue(testWatch.getBrand().equalsIgnoreCase(defaultBrand)); 
        //how can we make this assert better?

    }

    @Test
    public void testIncrementHour(){

        //first 'a' creating a watch with hour=12
        Watch testWatch = new Watch();

        //second 'a' perform an action: increment the hour by one
        testWatch.incrementHour(2);

        //third 'a' is assert truth: check that its a valid hour
        assertTrue(testWatch.getHour() == 14);

    }

    @Test
    public void testIncrementHour2(){

        //first 'a' creating a watch with hour=12
        Watch testWatch = new Watch();

        //second 'a' perform an action: increment the hour by one
        testWatch.incrementHour(0);

        //third 'a' is assert truth: check that its a valid hour
        assertTrue(testWatch.getHour() == 12);

    }

    @Test
    public void testIncrementHour3(){

        //first 'a' creating a watch with hour=12
        Watch testWatch = new Watch();

        //second 'a' perform an action: increment the hour by one
        testWatch.incrementHour(12);

        //third 'a' is assert truth: check that its a valid hour
        assertTrue(testWatch.getHour() == 0);

    }

    @Test
    public void testCheckTime(){

        Timex myTimex = new Timex();
        int expectedCharge = 90;

        myTimex.checkTime();

        assertTrue(myTimex.batt.getCharge() == expectedCharge);

    }


}
