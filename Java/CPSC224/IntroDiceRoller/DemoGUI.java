import java.awt.Color;
import java.awt.Dimension;
import java.awt.Font;
import javax.swing.*;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

class DemoGUI implements ActionListener{

    JFrame frame;
    JPanel topPanel, bottomPanel;
    JButton rollDice, nextTurn;
    JLabel label, statusLabel;
    String gameStatus = "~~~~ Game Start ~~~~";
    String labelStr = " # # # # # ";
    int player  = 1;
    int diceRollCount = 1;

    DemoGUI(){

        //setup the frame
        frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(null);
        frame.setLocationRelativeTo(null);
        frame.getContentPane().setBackground(new Color(75, 75, 75));
        frame.setSize(600, 360);


        //create some panels and add them to the frame
        topPanel = new JPanel();
        topPanel.setBackground(Color.lightGray);
        topPanel.setBounds(20, 20, 560, 200);

        //add a label to the top panel to show dice roll
        label = new JLabel();
        label.setText(labelStr);
        label.setFont(new Font("Arial", Font.BOLD, 72));
        //uncomment to see the border of your label
        //label.setBorder(BorderFactory.createLineBorder(Color.black));

        //add a label to top panel to show game status
        statusLabel = new JLabel();
        statusLabel.setText(gameStatus);
        statusLabel.setFont(new Font("Arial", Font.BOLD, 36));
        //statusLabel.setBorder(BorderFactory.createLineBorder(Color.black));

        topPanel.add(statusLabel);
        topPanel.add(label);

        bottomPanel = new JPanel();
        bottomPanel.setBackground(Color.lightGray);
        bottomPanel.setBounds(20, 230, 560, 90);

        rollDice = new JButton();
        rollDice.setText("Roll Dice");
        rollDice.setPreferredSize(new Dimension(260, 80));
        rollDice.addActionListener(this);
        bottomPanel.add(rollDice);

        nextTurn = new JButton();
        nextTurn.setText("Next Turn");
        nextTurn.setPreferredSize(new Dimension(260, 80));
        nextTurn.addActionListener(this);
        bottomPanel.add(nextTurn);

        frame.add(topPanel); // we want to do the adds to the frame at the end
        frame.add(bottomPanel);

        frame.setVisible(true); // make sure to call this after adding components
    }

    public static void main(String[] args) {
        
        new DemoGUI();


    }

    @Override
    public void actionPerformed(ActionEvent e) {
        
        if(e.getSource() == rollDice){
            System.out.println("Log: rollDice button clicked.");
            statusLabel.setText("Player: " + player + ": Dice Roll #" + diceRollCount++);
            rollDice();
        }

        if(e.getSource() == nextTurn){
            System.out.println("Log: nextTurn button clicked.");

            //switch players
            if(player == 1){
                player = 2;
            }else{
                player = 1;
            }

            diceRollCount = 1;
            statusLabel.setText("Player " + player + ": Turn Start!");
            label.setText(" # # # # # ");
        }
        
    }

    public void rollDice(){
        String diceRollLabel ="";

        for(int i = 0; i < 5; i++){
            diceRollLabel += "[" + (int)((Math.random() * (7 - 1)) + 1) + "]";
        }
        
        label.setText(diceRollLabel);
    }


}