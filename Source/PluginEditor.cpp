/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
SimpleDelayAudioProcessorEditor::SimpleDelayAudioProcessorEditor (SimpleDelayAudioProcessor& p, AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor (&p), processor (p), valueStateTree (vts)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (600, 400);
    
    //Delay Time
    numDelayDial.setSliderStyle(Slider::RotaryVerticalDrag);
    numDelayDial.setRange(20.0, 1000.0, 1);
    numDelayDial.setValue(500.0);
    numDelayDial.setNumDecimalPlacesToDisplay(0);
    numDelayDial.setTextBoxStyle(Slider::TextBoxBelow, false, 100, 50);
    numDelayDial.setTextValueSuffix(" Hz");
    addAndMakeVisible(numDelayDial);
    
    //Delay Label
    addAndMakeVisible(numDelayLabel);
    numDelayLabel.setText("Cutoff", dontSendNotification);
    numDelayLabel.setJustificationType(Justification::centred);
    numDelayValue = new AudioProcessorValueTreeState::SliderAttachment(valueStateTree, "delayValue", numDelayDial);
    
}

SimpleDelayAudioProcessorEditor::~SimpleDelayAudioProcessorEditor()
{
}

//==============================================================================
void SimpleDelayAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Variable Delay Line Stereo Reverb", getLocalBounds(), Justification::centred, 1);
}

void SimpleDelayAudioProcessorEditor::resized()
{
    const int labelWidth = getWidth() / 2;
    const int labelHeight = 25;
    const int sliderWidth = getWidth() / 2;
    const int sliderHeight = getHeight() - labelHeight;
    
    
    numDelayDial.setBounds(20, 20, sliderWidth, sliderHeight);
}
