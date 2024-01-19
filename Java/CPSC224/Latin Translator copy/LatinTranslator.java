
import javax.swing.*;
import java.awt.event.*;

class LatinTranslator extends JFrame
{
    private JPanel panel;
    private JLabel messageLabel;
    private JButton sinisterButton, dexterButton, mediumButton;
    private final int WINDOW_WIDTH = 400;
    private final int WINDOW_HEIGHT = 75;
    Data myData = new Data();

    public static void main(String[] args)
    {
        new LatinTranslator();
    }

    public LatinTranslator()
    {
        setTitle("Latin Translator");
        setSize(WINDOW_WIDTH, WINDOW_HEIGHT);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        messageLabel = new JLabel("Latin Translator");
        sinisterButton = new JButton("Sinister"); //left
        dexterButton = new JButton("Dexter"); //right
        mediumButton = new JButton("Medium"); //center

        sinisterButton.addActionListener(new sinisterButtonListener());
        dexterButton.addActionListener(new dexterButtonListener());
        mediumButton.addActionListener(new mediumButtonListener());

        panel = new JPanel();
        panel.add(messageLabel);
        panel.add(sinisterButton);
        panel.add(mediumButton);
        panel.add(dexterButton);
        

        add(panel);
        remove(panel);

        setVisible(true);

    }

    private class sinisterButtonListener implements ActionListener
    {
        public void actionPerformed(ActionEvent e)
        {
            myData.myValue++;
            messageLabel.setText(myData.myValue + "");
            
        }
    }

    private class dexterButtonListener implements ActionListener
    {
        public void actionPerformed(ActionEvent e)
        {
            messageLabel.setText("Right");
        }
    }

    private class mediumButtonListener implements ActionListener
    {
        public void actionPerformed(ActionEvent e)
        {
            messageLabel.setText("Center");
        }
    }

}