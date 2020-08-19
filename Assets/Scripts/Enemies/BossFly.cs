using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossFly : StateMachineBehaviour {

    public float speed = 2.5f;
    public float attackRange = 3f;
    public GameObject ballPrefab;
    public float nextAttactTime = 0.3f;
    
    private Transform player;
    private Rigidbody2D rb;
    private Boss boss;



    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        player = GameObject.FindGameObjectWithTag("Player").transform;
        rb = animator.GetComponent<Rigidbody2D>();
        boss = animator.GetComponent<Boss>();
    }

    // OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
    override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {

        if (Vector2.Distance(player.position, rb.position) <= 25) {
            boss.LookAtPlayer();

            Vector2 target = new Vector2(player.position.x, rb.position.y);
            Vector2 newPos = Vector2.MoveTowards(rb.position, target, speed * Time.fixedDeltaTime);

            rb.MovePosition(newPos);
        }

        if (Vector2.Distance(player.position, rb.position) <= attackRange) {
            animator.SetTrigger("attack");
            if(Time.time >= nextAttactTime) {
                nextAttactTime = Time.time + 0.3f;
            }
        }
    }

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        animator.ResetTrigger("attack");
    }

}
